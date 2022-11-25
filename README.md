# 2022c
資傳一甲


# Week06
## step01-1 畫星星 金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n", i, star);
    }
}
```

## step01-2 鷹架
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space = 5-i;
        int star = i*2-1;
        for(int k=0; k<space; k++){
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }

        printf(" 鷹架:%d樓 %d空格 %d星\n", i, space, star);
    }
}
```

## step01-3 約分;暴力法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b, ans;
    scanf("%d %d", &a, &b);

    for(int i=1; i<=a; i++){
        if( a%1==0 && b%i==0) ans=i;

    }
    printf("找到ans:%d", ans);
}
```

## step01-4 輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a, b, c;
    scanf("%d %d", &a, &b);

    while(1){
        c = a%b;
        printf("a:%d b:%d c:%d\n", a, b, c);
        if( c==0 )break;
        a = b;
        b = c;
    }
    printf("中的是:%d", b);
}
```

## step01-5 數值成立
```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999 ) printf("-999成立\n");
    if(-3 ) printf("-3成立\n");
    if(-2 ) printf("-2成立\n");
    if(-1 ) printf("-1成立\n");
    if( 0 ) printf("0不成立，所以甚麼都沒印\n");
    if( 1 ) printf("1成立\n");
    if( 2 ) printf("2成立\n");
    if( 3 ) printf("3成立\n");
    if( 4 ) printf("4成立\n");
    if( 999 ) printf("999成立\n");
    if( "a==0" ) printf("不管甚麼東西，幾乎都成立\n");
}
```

## step01-1 int整數型別
```cpp
#include <stdio.h>
int main()
{
    int n = 1234567812345678;
    printf("%d\n",n);
    long long int a = 1234567812345678;
    printf("%lld\n", a);
}
```

## step02-1 最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    long long int ans;
    for(long long int i = 1; i<=a; i++){
        if(a%i==0 && b%i==0 ) ans = i;
    }
    printf("答案是:%lld\n", ans);
}
```

## step02-2 輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld", &a, &b );

    while(1){
        c = a%b;
        printf("%lld%lld%lld\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n", b);
}
```

## step03-1 剝皮法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入數字: ");
    int n;
    scanf("%d", &n);
    while( n>0 ){
        printf("%d\n", n%2);
        n = n /2;
    }
}
```

# Week08
## step01-1  2個 while迴圈 來畫出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		for(int k=1; k<=n; k++){
			if(k<=n-i) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}

```

# Week08
## step01-2  2個for迴圈 來畫出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int i=1;
	while(i<=n){
		int k=1;
		while(k<=n){
			if(k<=n-i) printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}

```

# Week08
## step01-3  有質數判別
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤獨的質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2; i<n; i++){
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d 是質數(沒有壞掉)", n);
    else printf("%d 不是質數(早就壞掉了)", n);
}

```

# Week08
## step01-4 列出質數
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);

	for(int n=2; n<=a; n++){

		int bad=0;
		for(int i=2; i<n; i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ", n);
	}
}

```

# Week10
## step01-1 陣列array
```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};

    printf("a[0]:%d\n", a[0]);
    printf("a[1]:%d\n", a[1]);
    printf("a[2]:%d\n", a[2]);
    printf("a[3]:%d\n", a[3]);
}
```

# Week10
## step02-1 篩子法
```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};
    for(int i=0; i<4; i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    for(int i=3;i>=0;i--){
        printf("%d",a[i]);
    }
}
```

# Week12
## step01-1 泡泡排序法
```cpp
#include <stdio.h>
int a[5] = {5,4,3,2,1};
int main()
{
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if( a[i] >a[j]){
                int temp=a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<5; i++) printf("%d ", a[i]);
}
```

# Week12
##step02-1 二維陣列
```cpp
#include <stdio.h>
int main()
{
    int a;
    int b=10;
    int c[3];
    int d[3]={10,20,30};
    int g[2][3];
    int h[2][3] = { {10,20,30},{40,50,60} };
}
```

# Week12
##step02_2 左手i、右手j
```cpp
#include <stdio.h>
int main()
{

    int a[2][3]={{10,20,30},{40,50,60}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
