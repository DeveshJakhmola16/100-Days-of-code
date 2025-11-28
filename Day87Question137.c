//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
int main() {
    enum UserRole role;

    // Test each user role
    for (role = ADMIN; role <= GUEST; role++) {
        switch (role) {
            case ADMIN:
                printf("Role: ADMIN - Full access granted.\n");
                break;
            case USER:
                printf("Role: USER - Limited access granted.\n");
                break;
            case GUEST:
                printf("Role: GUEST - View only access granted.\n");
                break;
        }
    }

    return 0;
}