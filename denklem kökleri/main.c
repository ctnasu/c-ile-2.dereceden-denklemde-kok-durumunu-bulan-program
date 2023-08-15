//
//  main.c
//  denklem kökleri
//
//  Created by ASUDE on 15.08.2023.
//

#include <stdio.h>

int main() {
    int a,b,c,disc;
    printf("denklemin a degerini girin:");
    scanf("%d",&a);
    if(a!=0)
    {
        printf("denklemin b degerini girin:");
        scanf("%d",&b);
        printf("denklemin c degerini girin:");
        scanf("%d",&c);
        disc=b*b-4*a*c;
        printf("disciriminant=%d\n",disc);
        if(disc>0)
        {
            printf("denklemin iki koku vardir.");
        }
        else if(disc==0)
        {
            printf("denklemin bir gercek koku vardir.");
        }
        else if(disc<0)
        {
            printf("gercek kok yoktur.");
        }
    }
    else
    {
        printf("a=0 durumunda ikinci dereceden denklem olusturulamaz.");
    }
    return 0;
}
