/*#include <stdio.h>
#include <assert.h>

struct CountsBySoH {
  int healthy;
  int exchange;
  int failed;
};

struct CountsBySoH countBatteriesByHealth(const int* presentCapacities, int nBatteries) {
  struct CountsBySoH counts = {0, 0, 0};
  CountsBySoH=100*presentCapacities/nBatteries;
  return counts;
}

void testBucketingByHealth() {
  const int presentCapacities[] = {115, 118, 80, 95, 91, 72};
  const int numberOfBatteries = sizeof(presentCapacities) / sizeof(presentCapacities[0]);
  printf("Counting batteries by SoH...\n");
  struct CountsBySoH counts = countBatteriesByHealth(presentCapacities, numberOfBatteries);
  assert(counts.healthy == 2);
  assert(counts.exchange == 3);
  assert(counts.failed == 1);
  printf("Done counting :)\n");
}

int main() {
  testBucketingByHealth();
  return 0;
}*/
#include<stdio.h>
int main()
{
int present_capacity,rated_capacity,ch=0,ce=0,cf=0;
int SoH;
scanf("%d%d",&present_capacity,&rated_capacity);
  if(rated_capacity==0)
  {
    printf("Error");
    return 1;
  }
  
SoH=(100*present_capacity)/rated_capacity;
if(SoH>80 && SoH<=100)
ch++;
else if(SoH>=63 && SoH<=80)
  ce++;
else
  cf++;
printf("%d %d %d",ch,ce,cf);
  return 0;
}
