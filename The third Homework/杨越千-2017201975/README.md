# spider
# intro
	this is a simple RUC crawler <br>
<br>
## usage
		1.<br>
		�ڵ�ǰĿ¼������ <br>
		make <br>
		�ڵ�ǰĿ¼�µõ�spider <br>
		./spider url dom time <br>
		[url] is the web's url that you want to crawl first (default: http://www.ruc.edu.cn) <br>
		[dom] is such limitation that it should be included in each url the spider crawl (default: ruc.edu.cn ) <br>
		[time] shows crawling frequency: crawl 10 webs / sleep [time] (microsecond) (default: 500000 (0.5s)) <br> 
		note: you should omit arguments from right to left orderly, or it will get error <br>
		Ȼ���ڵ�ǰĿ¼�»ᰴ���༶Ŀ¼����ʽ������ȡ����ҳ.<br>

		2.<br>
		�ṩ��һ��������: spider.h <br>
		Needed: spider.cpp bfs.cpp findurl.cpp set.cpp <br>
		You can set: main.cpp <br>
<br>		
## others
   default download web: index.html <br>
