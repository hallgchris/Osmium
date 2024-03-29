#include "Loader.h"
#include <fstream>
#include <sstream>
#include <iostream>

namespace os
{
	std::string loadFileAsString(const GLchar *path)
	{
		std::string content;
		std::ifstream fileStream(path, std::ios::in);

		if (!fileStream.is_open())
		{
			std::cerr << "Could not read file " << path << ". File does not exist." << std::endl;
			return "";
		}

		std::string line = "";
		while (!fileStream.eof())
		{
			std::getline(fileStream, line);
			content.append(line + "\n");
		}

		fileStream.close();
		return content;
	}
}
