#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int chick_list(int num, int list[6]){
    for (int i =0;i<5;i++){
        if (num == list[i])
            return 0;
    }

    return 1 ;
}

void swap_list(int list[6]){
    for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < i; ++j) {
      if (list[j] > list[i]) {
        int temp = list[j];
        list[j] = list[i];
        list[i] = temp;
        }
    }}
}

int main()
{
    time_t now;
    time(&now);
    FILE* fp;
    int n ,j=0 ,i=0 , type, num;
    int a[7] = {-1,-1,-1,-1,-1,-1} ;
    char o;
    char a1[] = "=======Lucky lotto=======\n";
    
    srand((unsigned) time(NULL));
    fp = fopen("lotto.txt","wb+");
    fwrite(a1,sizeof(a1)-1,1,fp);
    fwrite(ctime(&now),25,1,fp);
    
    printf("歡迎光臨長庚樂透彩購買機台\n請問您要購買幾組 : ");
				scanf("%d", &num);
				printf("已為您購買 %d 組樂透組合輸出至 lotto.txt", num); 
    
    while(i<n){
        int a[7] = {-1,-1,-1,-1,-1,-1} ;
        j=0;
    while(j<6){
        num = rand()%69+1;
        type = chick_list(num,a);
    
        if (type){
           a[j] = num;
           j++;
        }
         
    }
    swap_list(a);
    while (1){
    num = rand()%10+1;
    type = chick_list(num,a);
    if (type){
        a[j] = num;
        break;
    } 
    }
    fprintf(fp,"[%d]:",i+1);
    for (int i = 0; i < 7; i++) {
        fprintf(fp, "%d ", a[i]);
    }
    fwrite("\n",1,1,fp);

    i++;
    }
    fwrite("=========================",25,1,fp);
    fseek(fp,0,SEEK_SET);
    fclose(fp);
    return 0;
}