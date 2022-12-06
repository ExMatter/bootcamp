#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct Dish
{
    char name[255];
    int price;
    int quant;
};
Dish *createDish(const char *name, int price, int quant){
    
}
void addDish(Dish *s){

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
    int pick;
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
    printf(">>");
    scanf("%d", &pick);
    switch (pick)
    {
    case 1:
        /* code */
        break;
    case 2:

        break;
    default:
        break;
    }
}

int main(){

    mainmenu();
    return 0;
}