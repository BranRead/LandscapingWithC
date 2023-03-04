#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int houseNum;
    float length, width, numOfTrees;
    char grass[9], blank;
    float purchasePrice(float length, float width, char grass[], float numOfTrees);

    printf("Enter House Number: ");
    scanf("%d", &houseNum);
    printf("\n");

    printf("Enter property length (feet): ");
    scanf("%f", &length);
    printf("\n");

    printf("Enter property width (feet): ");
    scanf("%f", &width);
    scanf("%c", &blank);
    printf("\n");

    printf("Enter type of grass (fescue, bentgrass, campus): ");
    scanf("%s", &grass);
    printf("\n");
    for(int i = 0; i < strlen(grass); i++){
        grass[i] = tolower(grass[i]);
    }

    printf("Enter the number of trees: ");
    scanf("%f", &numOfTrees);
    printf("\n");

    printf("Total cost for house %d is: $%.2f\n", houseNum, purchasePrice(length, width, grass, numOfTrees));

    return 0;
}

float purchasePrice(float length, float width, char grass[], float numOfTrees){
    float baseLabour = 1000;
    float totalCost = baseLabour;
    float area = length * width;
    char fescue[] = "fescue", bentgrass[] = "bentgrass", campus[] = "campus";

    if((length * width) > 5000){
        totalCost += 500;
    };

    if(strcmp(grass, fescue) == 0){
        totalCost += (area * 0.05);
    } else if (strcmp(grass, bentgrass) == 0){
        totalCost += (area * 0.02);
    } else if (strcmp(grass, campus) == 0){
        totalCost += (area * 0.01);
    } else {
        printf("Wrong input for grass type!\n");
    }

    totalCost += numOfTrees * 100;

    return totalCost;
}
