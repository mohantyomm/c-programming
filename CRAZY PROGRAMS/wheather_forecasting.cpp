#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<json-c/json.h>
#include<curl/curl.h>


#define API_KEY "de280c32d5cc70f272d1839e3b5a2bdd"
#define API_URL "http://api.openweathermap.org/data/2.5/weather?q=%s&appid=%s"

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: weather CITY_NAME\n");
        return 1;
    }

    CURL *curl;
    CURLcode res;
    char url[256];
    char city[256];
    char buffer[1024];
    struct json_object *json, *weather, *description, *main, *temp, *humidity;

    strcpy(city, argv[1]);
    sprintf(url, API_URL, city, API_KEY);

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, buffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        json = json_tokener_parse(buffer);

        if (json_object_object_get_ex(json, "weather", &weather)) {
            description = json_object_array_get_idx(weather, 0);
            printf("Current weather in %s: %s\n", city, json_object_get_string(json_object_object_get(description, "description")));
        }

        if (json_object_object_get_ex(json, "main", &main)) {
            temp = json_object_object_get(main, "temp");
            humidity = json_object_object_get(main, "humidity");
            printf("Temperature: %.1f °C\n", json_object_get_double(temp) - 273.15);
            printf("Humidity: %d%%\n", json_object_get_int(humidity));
        }

        json_object_put(json);
    }

    return 0;
}