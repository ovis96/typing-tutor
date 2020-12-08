#include<bits/stdc++.h>
#define pii pair<int,int>
#define mp make_pair
#define fs first
#define sc second
#define pb push_back
#define ppb pop_back
#define pf printf
#define pf1(a) printf("%d\n",a);
#define hi printf("hi!\n");
#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pcase(x) printf("Case #%d: ",x)
#define MX 1000000007
#define mod 1000000007
#define inf 2147483647
#define mem(arr,x) memset((arr), (x), sizeof((arr)));
#define For(i,x) for(int i=0;i<(x); i++)
#define For1(i,x) for(int i=1;i<=(x); i++)
#define Ifor(i,x) for(int i=(x-1);i>=0; i--)
#define Ifor1(i,x) for(int i=(x);i>=1; i--)
using namespace std;
typedef long long int ll;
typedef double dbl;
const int mx = 300005;

int main() {
	srand(time(0));
	char specialChars[] = "`1234567893-=~!@#$%^&*()_+;:'\"[{}]\\|";
	int n = strlen(specialChars);
	int pass = 0, count = 0;
	double t = clock();
	auto begin = std::chrono::high_resolution_clock::now();
	while(1) {
		char selectedChar = specialChars[rand()%n];
		printf("%c = ", selectedChar);
		char ch = getchar();
		while (ch == '\n') ch = getchar();
		if (ch == EOF) {
			printf("Given: %d, acquired: %d, Accuracy: %.2f\n", count, pass, pass/1.0/count*100.0);
			auto end = std::chrono::high_resolution_clock::now();
		    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
			printf("liome per char: %.20f\n", elapsed.count() * 1e-9 / count);
			exit(0);
		}
		count++;
		if (ch == selectedChar) {
			pass++;
			printf("Great BOb!\n");
		} else printf("Wrong!\n");
		cout << "gello!!" << endl;
		cout << "hi lubu!!" << endl;
	}
	return 0;
}