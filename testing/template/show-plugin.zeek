# @TEST-EXEC: zeek -NN Corelight::Template |sed -e 's/version.*)/version)/g' >output
# @TEST-EXEC: btest-diff output
