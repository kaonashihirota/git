#include "reftable/reftable-tests.h"
#include "test-tool.h"

int cmd__reftable(int argc, const char **argv)
{
	block_test_main(argc, argv);
	record_test_main(argc, argv);
	strbuf_test_main(argc, argv);
	return 0;
}
