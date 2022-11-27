#include <stdio.h>

float simpleInterest(float principle, float rate, float time) { return ((principle * rate * time) / 100); }

void main()
{
    float p, r;
    int t;

    printf("Enter principle followed by rate and time in years: ");
    scanf("%f %f %d", &p, &r, &t);

    printf("Simple interest for %.2f on %.2f for %d is\n%.2f, total amount being %.2f", p, r, t,
        simpleInterest(p, r, t), (p + simpleInterest(p, r, t)));
}
