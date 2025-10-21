#include <stdio.h>

double isunit(char c);
double max(double m[]);
double min(double m[]);
double sum(double m[]);
double ave(double m[]);

int main()
{
    int n = 1;
    char unit;
    int i = 0;
    double m[1000];

    // ��ʼ������������
    m[0] = -1;

    while(1){
        printf("��ӭ��������������λͳһ����ϵͳ��1ǧ��=1000�ˣ�1��=16��˾��1��=454�ˡ�\n");
        printf("����������������(������)��\n");

        while(scanf(" %d",&n)!=1 || n<1 || n>1000){
            printf("�Ƿ����룬��Ҫ[1,1000]���������������\n");
            while(getchar()!='\n');
        }

        printf("����������������λ��g,G-�ˣ�k,K-ǧ�ˣ�o,O-��˾��p,P-����,����x�����˳���\n");

        scanf(" %c",&unit);

        // �����˳��߼�
        if (unit == 'x' || unit == 'X'){
            if(m[0] == -1) {
                printf("û�������κλ������ݣ������˳���\n");
                return 0;
            } else {
                printf("���صĻ����������%.0lf��\n", max(m));
                printf("����Ļ����������%.0lf��\n", min(m));
                printf("�����ȫ��������%.0lf��\n", sum(m));
                printf("�����ƽ��������%.0lf��\n", ave(m));
                return 0;
            }
        }

        // ��֤��λ����
        while(isunit(unit) == 0){
            printf("�Ƿ����룬��Ҫ(g,G-��,k,K-ǧ��,o,O-��˾,p,P-��) ,����x�����˳���\n");
            scanf(" %c",&unit);

            // �ٴμ���˳�
            if (unit == 'x' || unit == 'X'){
                if(m[0] == -1) {
                    printf("û�������κλ������ݣ������˳���\n");
                    return 0;
                } else {
                    printf("���صĻ����������%.0lf��\n", max(m));
                    printf("����Ļ����������%.0lf��\n", min(m));
                    printf("�����ȫ��������%.0lf��\n", sum(m));
                    printf("�����ƽ��������%.0lf��\n", ave(m));
                    return 0;
                }
            }
        }

        // �洢����
        m[i] = isunit(unit) * n;
        printf("��%d�������������%.0lf��\n", i+1, m[i]);

        // ���½������λ��
        m[i+1] = -1;
        i++;

        // ��������Ƿ�����
        if(i >= 999){
            printf("�Ѵﵽ�������������ơ�\n");
            break;
        }
    }

    return 0;
}

double isunit(char c)
{
    if(c == 'g' || c == 'G') return 1;
    else if(c == 'k' || c == 'K') return 1000;
    else if(c == 'o' || c == 'O') return 454.0/16.0;  // ʹ�ø���������
    else if(c == 'p' || c == 'P') return 454;
    else return 0;
}

double max(double m[])
{
    if(m[0] == -1) return 0;  // �����鴦��

    double max_val = m[0];
    int i = 1;

    while(m[i] != -1){
        if (max_val < m[i]){
            max_val = m[i];
        }
        i++;  // ȷ��ÿ��ѭ��������
    }
    return max_val;
}

double min(double m[])
{
    if(m[0] == -1) return 0;  // �����鴦��

    double min_val = m[0];
    int i = 1;

    while(m[i] != -1){
        if (min_val > m[i]){
            min_val = m[i];
        }
        i++;  // ȷ��ÿ��ѭ��������
    }
    return min_val;
}




double sum(double m[])
{
    if(m[0] == -1) return 0;  // �����鴦��

    double total = 0;
    int i = 0;

    while(m[i] != -1){
        total += m[i];
        i++;
    }
    return total;
}

double ave(double m[])
{
    if(m[0] == -1) return 0;  // �����鴦��

    double total = 0;
    int count = 0;
    int i = 0;

    while(m[i] != -1){
        total += m[i];
        count++;
        i++;
    }

    return total / count;
}
