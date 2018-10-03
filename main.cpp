#include "bandit/bandit.h"

using namespace bandit;
using namespace snowhouse;

go_bandit([](){
	describe("test.omf", []{
		it("is just a test", [&]{
			AssertThat(true, IsTrue());
		});
	});
});

int main(int argc, char *argv[]) {
	return run(argc, argv);
}
