//数直線を使って距離を考えよう
//何度も図解する必要あり
#include <stdio.h>
#include <limits.h>

using namespace std;

int main(){
	int n,tmp,min=-10,max=10;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&tmp);
		if(min < tmp-max) min = tmp - max;
		if(max > tmp) max = tmp;
	}
	printf("%d\n",min);
	return 0;
}
