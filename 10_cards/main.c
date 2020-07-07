#include <stdio.h>
#include <stdlib.h>

int pick_card(int*deck);
int print_card(int card);
 
void pick8cards()
{
  int cards[52];
  int i, card;
  for(i=0; i<52; i++)
           cards[i]=i+1;
          
           srand (time(NULL));
           for(i=0; i<8; i++) {
                    card=pick_card(cards);
                    print_card(card);
                    }
}

int pick_card(int*deck)
{
    int r, i, card;
    static deck_size=52;
    r=rand()%deck_size;
    card=deck[r];
    for(i=r+1; i<deck_size; i++)
               deck[i-1]=deck[i];
    deck[deck_size -1]=0;
    deck_size--;
    return card;
}

int print_card(int card)
{
    int k;
    if(card<=13)
            printf("Heart: \n");
    else if(card<=26)
            printf("Diamond: \n");
    else if(card<=39)
            printf("Club: \n");
    else
            printf("Spade: \n");
           
    k=card%13;
    if(k==0)
	    k=13;
    printf("%d \n", k);
}

int main()
{
    pick8cards();
   
    system("PAUSE");
    return 0;
   
}
   
