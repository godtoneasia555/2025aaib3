using namespace std;

int main()
{
	int a, b, a2, b2;
	while( cin >> a >> b) { //part 1
		int ans = 0;
		if(a<b) { a2 = a; b2 = b; }
		else {a2 = b; b2 = a; }
		for(int i=a2; i<=b2; i++){
			int now = 1, n=i;
			while(n!=1){
				if(n%2==1) n = 3*n+1;
				else n = n/2;
				now++;
			}
			if(now>ans) ans = now;
		}
		printf("%d %d %d\n", a, b, ans);//c
	}//c langage casier part 2: ouput
}
