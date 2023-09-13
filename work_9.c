#include <string.h>
#include <stdio.h>

struct stu
{
  int num;
  char name[10];
  int age;  /* data */
};

void fun(struct stu *p)
{
    printf("%s\n",(*p).name);
    return;
}

int main()
{
    struct stu students[3] = {{1,"zhang",20},{2,"wang",19},{3,"li",18}};
    fun(students + 1);
    return 0;
}
