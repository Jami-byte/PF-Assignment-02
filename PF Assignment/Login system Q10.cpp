#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%49s", username);
    printf("Enter password: ");
    scanf("%49s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("Login Successful\n");
    } else {
        printf("Login Failed\n");
    }

    return 0;
}

