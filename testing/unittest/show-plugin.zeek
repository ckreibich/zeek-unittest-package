# @TEST-EXEC: zeek -NN Corelight::UnitTest |sed -e 's/version.*)/version)/g' >output
# @TEST-EXEC: btest-diff output
