#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"

int main(void)
{
    // Create a JSON object
    cJSON *root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "name", "Unikraft");
    cJSON_AddNumberToObject(root, "version", 17);
    cJSON_AddBoolToObject(root, "fast", 1);

    cJSON *features = cJSON_CreateArray();
    cJSON_AddItemToArray(features, cJSON_CreateString("lightweight"));
    cJSON_AddItemToArray(features, cJSON_CreateString("secure"));
    cJSON_AddItemToArray(features, cJSON_CreateString("portable"));
    cJSON_AddItemToObject(root, "features", features);

    // Serialize to string
    char *json_str = cJSON_Print(root);
    printf("Generated JSON:\n%s\n\n", json_str);

    // Parse it back
    cJSON *parsed = cJSON_Parse(json_str);
    cJSON *name = cJSON_GetObjectItem(parsed, "name");
    cJSON *version = cJSON_GetObjectItem(parsed, "version");

    printf("Parsed name: %s\n", name->valuestring);
    printf("Parsed version: %d\n", (int)version->valuedouble);
    printf("Parse OK!\n");

    // Cleanup
    free(json_str);
    cJSON_Delete(root);
    cJSON_Delete(parsed);

    return 0;
}
