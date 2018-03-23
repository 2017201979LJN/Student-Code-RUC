#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <set>
#include <queue>
#include "bfs.h"
#include "find_url.h"
#include "download.h"
#include "normalization.h"

using namespace std;

int main() {
	set <string> url_set;
	url_set.clear();
	string start_web_page = "info.ruc.edu.cn/";
	bfs(start_web_page, url_set);
}
