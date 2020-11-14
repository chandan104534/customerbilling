#include "unity.h"
#include "customerbilling.h"
#include "test_customerbilling.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_summ(void)
{
  TEST_ASSERT_EQUAL(60, summ(2,30));
  TEST_ASSERT_EQUAL(480, summ(6,80));
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_summ);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
