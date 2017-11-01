#define DEBUG_PRINT printf("File name is %s.Function is %s.Local line is %d.\n",\
							__FILE__,__FUNCTION__,\
							__LINE__);

#define OBNUM 6
#define RESNUM 20

#define MESSAGELENGTH 80

#define DOUBLE 2
#define TRIPLE 3

typedef enum _observeType {REAL_ESTAE_BOSS=0 ,GOVEMENT ,THE_RICH_MAN,THE_POOR_MAN } observeType;

static char *representative[] =
{ "real estate boss", "government", "the rich man", "the poor man" };

static char *desire[] =
		{ "I am very happy and expect further rise in house prices.",
				"Try to control house prices and bring happies to people.",
				"It does not matter,I have plenty money.",
				"I cannot afford a house,I cannot afford a wife,I cannot afford a baby." };

typedef void (*displayHousePriceInformation)(float price ,char *observerMan,char *information);

typedef struct _ZJK_housePrice
{
	float price;
} ZJK_housePrice;

typedef struct _observes
{
	int isRegistered;
	observeType type;
	char representative[RESNUM];
	char desire[MESSAGELENGTH];
	ZJK_housePrice observed;
	displayHousePriceInformation displayInformation;
} observes;


observes *obTogether[OBNUM];
char * myStrcpy(char*dest, const char *source);
int myStrcomp(const char *compA, const char *compB);
int myStrlen(const char *str);
char * myStrcat(char*dest, const char *source);
char * myStrstr(char *string, char * subString);
char * myStrtok(char *str, const char *delim);

int sortArray(void *array, int num, int length,
		int (*callback)(void *, void *));

void setHousePrice(float * price,observes ob);
int attachObserve(observes ob);
int detachObserve(observes ob);
void notifyObserve(float price);
