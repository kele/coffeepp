#pragma once

#include <memory>
#include <string>
#include <vector>
#include <istream>

class Line;

class File {
public:
	File(std::istream& in, const std::string& name);
	std::string getNewBuf() const;
	std::string getHeaderBuf() const;
private:
	void closeScopes(int newIndent);

	std::vector<std::shared_ptr<Line>> lines;
	int indent;
	std::string name;
};
