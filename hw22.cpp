#include<stdio.h>

struct Sertivor{
    char id[20];//identify
    char name[20];//use_name
    unsigned int  wage;//���~
    unsigned int  w_h;//�u�@�ɼ�
    unsigned int  p;//�~��

};
int salc(struct Sertivor *);  //�p���~�� 
void show(struct Sertivor *); //�C�X���G 
int main(void){

    int n;//��n�����
    int x;

    struct Sertivor sertivor[4]; //���c�}�C 

    printf("���X�ӤuŪ��?:");
    scanf("%d", &n);

    for(x=0;x<n;++x){
        printf("�o�O��%d�����\n\n", x+1);
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
int salc(struct Sertivor *ser){ //�p���~�� 

    (ser->p)=(ser->wage)*(ser->w_h);

    return ser->p;
}
void show(struct Sertivor *show){ //�C�X���G 

    printf("\n\n%s�����---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->wage);
    printf("WORK_HOURS:%d\n",show->w_h);
    printf("PAY:%d\n",show->p);
    printf("-------------\n");
}
