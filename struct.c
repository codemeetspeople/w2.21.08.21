#include <stdio.h>

typedef struct {
    char firstName[10];
    char lastName[10];
    int age;
    char gender;
} Person;

void describePerson(Person *p) {
    printf("First name: %s\n", p->firstName);
    printf("Last name: %s\n", p->lastName);
    printf("Age: %d\n", p->age);
    printf("Gender: %c\n\n", p->gender);
}

int main() {
    Person john = {"John", "Doe", 30, 'm'};
    Person jane = {"Jane", "Doe", 20, 'f'};

    describePerson(&john);
    describePerson(&jane);

    return 0;
}
