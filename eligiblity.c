#include <stdio.h>

int main() {
    int math, physics, chemistry, total, mp_total;

    
    printf("Enter marks in Mathematics: ");
    scanf("%d", &math);

    printf("Enter marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);


    total = math + physics + chemistry;
    mp_total = math + physics;

    
    if (math >= 65 && physics >= 55 && chemistry >= 50 &&
        total >= 190 && mp_total >= 140) {
        printf("The candidate is Eligible for admission.\n");
    }
    else {
        printf("The candidate is NOT Eligible for admission.\n");
    }

    return 0;
}