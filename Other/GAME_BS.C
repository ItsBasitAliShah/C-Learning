#include <stdio.h>
#include <conio.h>

void waitForEnter() {
    printf("\nPress Enter...\n"); //shows when the line ends
    getch();  // Waits for the user to press Enter
}

int main() {
    char gamertag[30];
    int firstchoice, secondchoice, thirdchoice;
	//all the variables i made

    clrscr(); // clears screen in Turbo C

    printf("==============================\n");
    printf("||     The Lost Dungeon     ||\n");
    printf("==============================\n");

    printf("\nYou wake up in a Dungeon Deep underground");
    waitForEnter();

    printf("You only have a small dagger!");
    waitForEnter();

    printf("\nChoose your name: ");
    scanf("%s", gamertag);

    printf("\nExplorer %s, You are in a Cold room, You notice three things nearby\n", gamertag);

    printf("\n1. A hole in the floor leading downwards\n");
    printf("2. A red Door\n");
    printf("3. A dark empty hallway with strange walls\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &firstchoice);

    if (firstchoice == 1) {
	printf("\nYou went down in a glowing room, there is a chest in the centre of the room\n");

	printf("1. Open the chest\n");
	printf("2. Ignore it and explore further.\n");
	printf("Enter your choice (1-2): ");
	scanf("%d", &secondchoice);

	if (secondchoice == 1) {
	    printf("\nYou found the treasure, and a key to Open the main dungeon gate!\n");

	    printf("1. Run back with the key to the Main Gate\n");
	    printf("2. Grab the Treasure and try to run back up\n");
	    printf("Enter your choice (1-2): ");
	    scanf("%d", &thirdchoice);

	    if (thirdchoice == 1)
		printf("\nYou escape but lose the Treasure\n");
	    else if (thirdchoice == 2)
		printf("\nGreedy Player, You Died\n");
	    else
		printf("Invalid choice\n");

	} else if (secondchoice == 2) {
	    printf("\nYou Ignored the chest and got lost in the Dungeon forever!\n");
	} else {
	    printf("Invalid choice\n");
	}
    }

    else if (firstchoice == 2) {
	printf("\nYou opened the door, You see a zombie Corpse\n");

	printf("1. Search the corpse\n");
	printf("2. Stay quiet and move slowly \n");
	printf("Enter your choice (1-2): ");
	scanf("%d", &secondchoice);

	if (secondchoice == 1) {
	    printf("\nThe zombie woke up and tried to attack you\n");

	    printf("1. Fight it with your dagger.\n");
	    printf("2. Grab the key on its waist and run\n");
	    printf("Enter your choice (1-2): ");
	    scanf("%d", &thirdchoice);

	    if (thirdchoice == 1)
		printf("\nIt was hard fighting the zombie without getting bitten but You Won!\n");
	    else if (thirdchoice == 2)
		printf("\nYou grabbed the Main Door key and Escaped!\n");
	    else
		printf("Invalid choice\n");

	} else if (secondchoice == 2) {
	    printf("\nYou almost escape, but a monster appears behind you and Kills You, NOOB\n");
	} else {
	    printf("Invalid choice\n");
	}
    }

    else if (firstchoice == 3) {
	printf("\nYou walk straight in the hallway, you see something written on the Wall,\n");
	printf("\nIt says: 'Only silence can open the way.'\n");

	printf("1. Shout to test the echo.\n");
	printf("2. Stay silent and keep moving\n");
	printf("Enter your choice (1-2): ");
	scanf("%d", &secondchoice);

	if (secondchoice == 1) {
	    printf("\nYou shouted and a monster comes breaking the wall \n");

	    printf("1. Run!\n");
	    printf("2. Hide!\n");
	    printf("Enter your choice (1-2): ");
	    scanf("%d", &thirdchoice);

	    if (thirdchoice == 1)
		printf("\nYou ran and found a hidden Escape!\n");
	    else if (thirdchoice == 2)
		printf("\nYou tried to hide but the monster smelled you and killed you :(\n");
	    else
		printf("Invalid choice\n");

	} else if (secondchoice == 2) {
	    printf("\nYou found a hidden Button on the wall. You pressed it and escaped!\n");
	} else {
	    printf("Invalid choice\n");
	}
    }

    getch();
    return 0;
}
