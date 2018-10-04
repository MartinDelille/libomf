#include "bandit/bandit.h"

#include "OmfDocument.h"

using namespace bandit;
using namespace snowhouse;

go_bandit([](){
	describe("test.omf", []{
		OmfDocument doc;

		it("open an existing file", [&]{
			doc.open("test.omf");
		});

		it("throws exception when opening an unexisting file", [&]{
			AssertThrows(std::runtime_error, doc.open("unexisting.omf"));
			AssertThat(LastException<std::runtime_error>().what(), Is().EqualTo("Unable to open unexisting.omf"));

		});
	});
});

int main(int argc, char *argv[]) {
	return run(argc, argv);
}
