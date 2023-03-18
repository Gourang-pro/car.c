#include <stdio.h>

int main() 
{
    int speed = 0;
    int gear = 0;
    printf("Car is started!\n");
    
    while (1) {
        printf("Current speed: %d mph\n", speed);
        printf("Current gear: %d\n", gear);
        
        char command;
        printf("Enter command (a = accelerate, b = brake, g = change gear, q = quit): ");
        scanf(" %c", &command);
        
        switch (command) {
            case 'a':
                speed += 10;
                break;
            case 'b':
                if (speed >= 10) {
                    speed -= 10;
                } else {
                    printf("Car is already stopped.\n");
                }
                break;
            case 'g':
                printf("Enter gear (1-5): ");
                scanf("%d", &gear);
                break;
            case 'q':
                printf("Car is stopped.\n");
                return 0;
            default:
                printf("Invalid command.\n");
                break;
        }
    }
}
