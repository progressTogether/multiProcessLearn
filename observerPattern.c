#include<stdio.h>

#include"observerPattern.h"
void initEveryone()
{
	observes obRealEstaeBoss;
	obRealEstaeBoss.isRegistered = 0;
	obRealEstaeBoss.type = REAL_ESTAE_BOSS;
	obRealEstaeBoss.displayInformation = displayEveryoneDesire;
	attachObserve(obRealEstaeBoss);

	observes goverment;
	goverment.isRegistered = 0;
	goverment.type = GOVEMENT;
	goverment.displayInformation = displayEveryoneDesire;
	attachObserve(goverment);

	observes theRichMan;
	theRichMan.isRegistered = 0;
	theRichMan.type = THE_RICH_MAN;
	theRichMan.displayInformation = displayEveryoneDesire;
	attachObserve(theRichMan);

	observes thePoorMan;
	thePoorMan.isRegistered = 0;
	thePoorMan.type = THE_POOR_MAN;
	thePoorMan.displayInformation = displayEveryoneDesire;
	attachObserve(thePoorMan);
}

void displayEveryoneDesire(float price, const char *observerMan,
		const char *information)
{
	printf("NOW zjk house price is %f as %s,%s\n", price, observerMan,
			information);
}
