#include "movieticketbooking.h"
#include "unity.h"


void test_insert_details(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_insert_details);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}



void test_insert_details(void)
{
    struct book b;
    char code[20]="SAM123456";

    char name[20]="SAMAYANJALI";

    char date [20]="11 jun 2001";

    int cost = 200;

 TEST_ASSERT_EQUAL("SAM123456",code);
 TEST_ASSERT_EQUAL("SAMAYANJALI", name);
 TEST_ASSERT_EQUAL(200, cost);
 TEST_ASSERT_EQUAL("11 jun 2001", date);
   
}