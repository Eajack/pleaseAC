import os,re


class Util(object):
	"""docstring for Util"""
	def __init__(self):
		self.input_readme = r'readme模板.md'
		self.output_readme = r'../readme.md'

		#1.leetcode_cn 普通算法题
		self.file1Finished = r'../codes/1.leetcode_cn-original'
		self.file1All = r'leetcode_cn-original-1000题.txt'

		# 统筹
		self.fileFinished = []
		self.fileAll = []
		self.fileFinished.append(self.file1Finished)
		self.fileAll.append(self.file1All)
		if(len(self.fileFinished) != len(self.fileAll)):
			print('Error 1: len(self.fileFinished) != len(self.fileAll)')
			exit(1)
		self.targetFuntion()

	# 工具函数：获取文件夹下所有文件名（带路径）
	def getFilePath(self, folderPath):
		temp = os.listdir(folderPath)
		title = folderPath.split('/')[-1]
		fileNames = [name[0:(len(name)-name[::-1].find('.')-1)] for name in temp]
		return [title, fileNames]

	# 工具函数：读取文件
	def getContent(self, filePath):
		ans = []
		with open(filePath, 'r', encoding='utf-8') as rf:
			ans = rf.readlines()
		return ans

	#目标函数
	def targetFuntion(self):
		#1- 读取模板
		writeLines = self.getContent(self.input_readme)

		#2- 完善 writeLines
		for i in range(len(self.fileFinished)):
			numbers = self.getContent(self.fileAll[i])
			[title, fileNames] = self.getFilePath(self.fileFinished[i])

			###
			writeLines.append('# {}\n'.format(title))
			writeLines.append('完成情况：{}\n'.format(len(fileNames)))
			for i in range(len(numbers)):
				if numbers[i].strip() in fileNames:
					link = 'https://github.com/Eajack/pleaseAC/blob/master/codes/{}/{}.cpp'\
						.format(title,numbers[i].strip())
					writeLines.append('- [{}]({})\n'.format(numbers[i].strip(), link))

		#3- 生成readme
		with open(self.output_readme, 'w', encoding='utf-8') as wf: 
			for w in writeLines:
				wf.write(w)


if __name__ == '__main__':
	t = Util()
