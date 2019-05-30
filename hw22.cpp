#include<stdio.h>

struct Sertivor{
    char id[20];//identify
    char name[20];//use_name
    unsigned int  wage;//時薪
    unsigned int  w_h;//工作時數
    unsigned int  p;//薪水

};
int salc(struct Sertivor *);  //計算薪資 
void show(struct Sertivor *); //列出結果 
int main(void){

    int n;//有n筆資料
    int x;

    struct Sertivor sertivor[4]; //結構陣列 

    printf("有幾個工讀生?:");
    scanf("%d", &n);

    for(x=0;x<n;++x){
        printf("這是第%d筆資料\n\n", x+1);
        printf("pls entering employee id:");
        scanf("%s", sertivor[x].id);
        printf("pls entering employee name:");
        scanf("%s", sertivor[x].name);
        printf("pls entering employee wage: ");
        scanf("%d", &sertivor[x].wage);
        printf("pls entering employee work_hours:");
        scanf("%d", &sertivor[x].w_h);

        salc(&sertivor[x]);
    }//end loop
    for(x=0;x<n;++x){
    	show(&sertivor[x]);
	}//end loop 
	
	return 0;

}
int salc(struct Sertivor *ser){ //計算薪資 

    (ser->p)=(ser->wage)*(ser->w_h);

    return ser->p;
}
void show(struct Sertivor *show){ //列出結果 

    printf("\n\n%s的資料---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->wage);
    printf("WORK_HOURS:%d\n",show->w_h);
    printf("PAY:%d\n",show->p);
    printf("-------------\n");
}
