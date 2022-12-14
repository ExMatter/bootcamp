#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

struct DishList
{
    char name[255];
    int price;
    int quant;
    DishList *dish;
} *prev, *next;

DishList *createDish(const char *name, int price, int quant){
    DishList *newDish = (DishList *)malloc(sizeof(DishList));
    strcpy((*newDish).name,name);
    newDish->price = price;
    newDish->quant = quant;
    newDish -> dish = NULL;
    return newDish;
}

void addDish(){
    char name[255];
    int price;
    int quant;
    int flag = 1;

    while(flag == 1){
        name[255] = {0};
        printf("Insert the name of the dish [Lowercase letters]: ");
        scanf("%s", name);
        int i = 0;
        int upp = 0;
        while(name[i] != '\0'){
            if(isupper(name[i])){
                upp = 1;
                break;
            } else {
                i++;
            }
        }
        if(upp == 0){
            flag = 0;
        }
    }
    
    int flag = 1;

    while(flag == 1){
        long int price;
        printf("Insert the price of the dish [1000..50000]: ");
        scanf("%ld", &price);
        
        if(price >= 1000 && price <= 50000){
            flag = 0;
        }
    }

    int flag = 1;

    while(flag == 1){
        int quant;
        printf("Insert the quantity of the dish [1..999]: ");
        scanf("%d", &quant);
        
        if(price >= 1 && price <= 999){
            flag = 0;
        }
    }
    createDish(name, price, quant);
}
void time(){
    time_t rawtime;
    struct tm * timeinfo;

    time (&rawtime);
    timeinfo = localtime(&rawtime);
    printf("%s", asctime(timeinfo));
}
void detect(){
    #ifdef _WIN32 // Includes both 32 bit and 64 bit
	    #ifdef _WIN64
	        printf("System: Windows 64 bit\n");
	    #else 
	        printf("System: Windows 32 bit\n");
	    #endif
	#elif __APPLE__
        #include "TargetConditionals.h"
        #if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULATOR
            printf("iPhone stimulator\n");
        #elif TARGET_OS_IPHONE
            printf("System: iPhone\n");
        #elif TARGET_OS_MAC
            printf("System: MacOS\n");
        #else
            printf("Other Apple OS\n");
        #endif
	#elif __linux__
	    printf("Linux\n");
	#elif __unix__
	    printf("Other unix OS\n");
	#else
	#endif

}
void mainmenu(){
    int pick = 0;
    while (pick != 8)
    {
        detect();
        time();
        printf("1. Add Dish\n");
        printf("2. Remove Dish\n");
        printf("3. Add Customer\n");
        printf("4. Search Customer\n");
        printf("5. View Warteg\n");
        printf("6. Order\n");
        printf("7. Payment\n");
        printf("8. Exit Warteg\n");
        printf(">> ");
        scanf("%d", &pick);
        switch (pick)
        {
        case 1:
            addDish();
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:
            
            break;
        
        default:
            mainmenu();
            break;
        }
    }
}

int main(){

    mainmenu();
    return 0;
}