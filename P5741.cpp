#include<iostream>
using namespace std;

struct info{
	string name;
	int ch;
	int en;
	int math;
	int sum;
};
info stu[1024];
int main(){
	int cnt,i = 0;
	cin>>cnt;
	while(i < cnt){
		cin >> stu[i].name >> stu[i].ch >> stu[i].en >> stu[i].math;
		stu[i].sum = stu[i].ch + stu[i].en + stu[i].math;
		i++;
	}
	//�� �� ĳ �� ѧ �� <i,j> ��ÿһ�Ƴɼ��ķֲ������ 5�����ֲַܷ���� 10
	for(int i = 0; i < cnt - 1; i++){
		for(int j = i+1; j < cnt; j++){
			if( ((stu[i].en - stu[j].en) <= 5) && (stu[i].en - stu[j].en >= -5) && 
				((stu[i].ch - stu[j].ch) <= 5) && ((stu[i].ch - stu[j].ch) >= -5) && 
				((stu[i].math - stu[j].math) <= 5) && ((stu[i].math - stu[j].math) >= -5) && 
				((stu[i].sum - stu[j].sum) <= 10) && ((stu[i].sum - stu[j].sum) >= -10)){
				cout << stu[i].name << " " << stu[j].name << "\n";
			}
		}
	}
}
