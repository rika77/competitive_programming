#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct pp {
	char name[100];
	int t;
} P;

P Q[LEN];	//each 要素 has name[100]+t
int head,tail,n;

void enqueue(P x) {
	Q[tail] = x;	//末尾に追記
	tail = (tail + 1)  % LEN;	//tail0->1,1->2,,,100004->0
}
P dequeue() {	//取り出してreturn 
	P x = Q[head];
	head = (head + 1) % LEN;
	return x;
}

int min(int a, int b) {
	{return a<b ? a : b;}
}

int main() {
	int n,q;
	P haka;
  	scanf("%d %d", &n, &q);
	for (int i=0;i<n;i++) {
	scanf("%s %d", Q[i].name, &Q[i].t);
	}
	int time = 0;
	head = 0;
	tail = n;

	//Q[i] とhead位置を合わせればok
	
	while (head != tail) {
		haka = dequeue();	//どんなやつもdequeueするから
					//そしてdequeueしたやつを使うこと.
		if (haka.t <= q) {
		time += haka.t;
		haka.t = 0;
		printf("%s %d\n", haka.name, time);
		}
		else { //長くかかる
		time += q;
		haka.t -= q;
		enqueue(haka);
		}
	}
	return 0;
}
				





	
