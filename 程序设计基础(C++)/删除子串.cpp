#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int flag = 0;
    char arr[100] = { 0 };
    char str[100] = { 0 };
    cin.getline(arr, sizeof(arr));
    cin.getline(str, sizeof(str));//�пո������������ 

    int leng_arr = strlen(arr);//strlen�õ��ĳ����������ַ����ĳ��ȣ���������ԭ����
    int leng_str = strlen(str);

    for (int i = 0; i < leng_arr; i++)
    {
        if (arr[i] == str[0])
        {
            flag = 1;
            for (int j = 1; j < leng_str; j++)
            {
                if (arr[i + j] != str[j])//�жϺ����ַ����Ƿ���ͬ
                    flag = -1;
            }
            if (flag == 1)//���ҵ��Ӵ�����ʼ������ɾ���Ӵ�����
            {
                for (int j = i; j < leng_arr; j++)
                {
                    arr[j] = arr[j + leng_str];//���һ���Ӵ��ĳ��������滻
                }
                leng_arr -= leng_str;//�Ӵ���ɾ���������������̣������ٱ������������ַ�����һ������ʡ�ԣ�
                i = -1;//ѭ����ɺ��i++����i��Ϊ0����ͷ��ʼ��������Ϊɾ���Ӵ�����ܻ�����µ��Ӵ�(���裩 
            }
        }
    }
    cout << arr << endl;
    return 0;
}
