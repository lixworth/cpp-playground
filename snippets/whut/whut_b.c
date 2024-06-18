  //
  // Created by Worth Lix on 2023/11/12 13:37.
  //
  #include <stdio.h>
  #include <stdlib.h>

  int cmp(const void *a, const void *b)
  {
  //  return *(int*)a - *(int*)b; //由小到大排序
    return *(int *)b - *(int *)a; // 由大到小排序
  }

  int main(){
    int n,m,k;
    scanf("%d%d%d\n",&n,&m,&k); // 学生 原神种类 能力值
    int input[10000][10000] = {};
    int count[1000] = {};
    int map[1000][1000] = {};
    for (int i = 0; i < n; ++i) {
      int ys_no,exp;
      scanf("%d%d",&ys_no,&exp);
      input[ys_no][count[ys_no]] = exp;
      map[ys_no][exp] = i+1;
      count[ys_no]++;
    }

    for (int i = 1; i <= m; ++i) {
      qsort(input[i],count[i],sizeof(int),cmp);
      for (int j = 0; j < n; ++j) {
//        printf("%d:%d\n",j,input[i][j]);
        if(input[i][j] != 0){
          printf("%d ",map[i][input[i][j]]);
        }
      }
      printf("\n");
    }
    return 0;
  }