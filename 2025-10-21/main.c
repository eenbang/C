#include <stdio.h>
#include <math.h>
double isunit(char c);
double max(double m[]);
double min(double m[]);
double sum(double m[]);
double ave(double m[]);


int main()
{
    int n = 1; char unit;
    int i = 0; double m[1000];
    m[0] = -1;
    while(1){
        printf("��ӭ��������������λͳһ����ϵͳ��1ǧ��=1000�ˣ�1��=16��˾��1��=454�ˡ�\n");
        printf("����������������(������)��\n");
        while(scanf(" %d",&n)!=1 || n<1 || n>10000){
            printf("�Ƿ����룬��Ҫ[0,1000]���������������\n");
            while(getchar()!='\n');
        }
        printf("����������������λ��g,G-�ˣ�k,K-ǧ�ˣ�o,O-��˾��p,P-����,����x�����˳���\n");
        scanf(" %c",&unit);
        while(isunit(unit) == 0){


            /*������xʱ���д���*/
            if (unit=='x' || unit=='X' ){
                m[i] = -1;//������ĩ�˽��б��
                if(m[0] == -1) return 0;//���ʲô��û�У�ֱ���˳�
                else{
                    printf("���صĻ����������%.0lf��\n",max(m));
                    printf("����Ļ����������%.0lf��\n",min(m));
                    printf("�����ȫ��������%.0lf��\n",sum(m));
                    printf("�����ƽ��������%.0lf��\n",ave(m));
                    return 0;
                }
            }
             else{
                 printf("�Ƿ����룬��Ҫ(g,G-��,k,K-ǧ��,o,O-��˾,p,P-��) ,����x�����˳���\n");
                 scanf(" %c",&unit);
             }


        }
        i++;
        m[i-1] = round(isunit(unit) * n);//����i�ε�������g����ʽ��¼������i-1��
        printf("��%d�������������%.0lf��\n",i,m[i-1]);


    }

}

double isunit(char c)
{


    if(c == 'g' || c == 'G') return 1;
    else if(c == 'k' || c == 'K') return 1000;
    else if(c == 'o' || c == 'O') return 454.0/16.0;
    else if(c == 'p' || c == 'P') return 454;
    else return 0;
}

double max(double m[])
{
    int i = 1;
    double maxi = m[0];
    while(m[i] != -1){
        if (maxi < m[i]){
            maxi = m[i];

        }
        i++;
    }
    return maxi;
}
double min(double m[])
{
    double mini = m[0];
    int i = 1;
    while(m[i] != -1){
        if (mini > m[i]){
            mini = m[i];

        }
        i++;
    }
    return mini;
}
double sum(double m[])
{
    double suma = m[0];
    int i = 1;
    while(m[i] != -1){
        suma += m[i];
        i++;
    }
    return suma;
}
double ave(double m[])
{
    double suma = m[0];
    int i = 1;
    while(m[i] != -1){
        suma += m[i];
        i++;
    }
    return round(suma/i);
}
