//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
#include <stdio.h>
#include <stdlib.h>
//定义一个函数找两个值是否想等。
//返回0表示为假，返回1表示为真。
int fun(int arr[]){
	for (int i = 0; i < 5; i++){
		for (int j = i + 1; j < 5; j++){
			if (arr[i]==arr[j]){
				return 0;//若相等返回0，否则为1
			}
		}
	}
	return 1;
}
int main(){
	int arr[5] = {0};
	int a, b, c, d, e;
	//循环遍历所有情况
	for (a = 1; a < 6;++a){
		for (b = 1; b < 6;++b){
			for (c = 1; c < 6;++c){
				for (d = 1; d < 6;d++){
					for (e = 1; e < 6; ++e){
						//A选手说：B第二，我第三；
						//B选手说：我第二，E第四；
						//C选手说：我第一，D第二；
						//D选手说：C最后，我第三；
						//E选手说：我第四，A第一；
                        //每位选手都说对了一半用相加为1表示
if ((b==2)+(a==3)==1&&(b==2)+(e==4)==1&&(c==1)+(d==2)==1&&(e==4)+(a==1)==1){
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	if (fun(arr)){
		printf("a=%d\n", a);
		printf("b=%d\n", b);
		printf("c=%d\n", c);
		printf("d=%d\n", d);
		printf("e=%d\n", e);
	}
	


						}
					}
				}
			}
		}
	}


	system("pause");
	return 0;
}