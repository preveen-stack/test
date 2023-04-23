#!env python3
import subprocess

def main():
	while True:
		try:
			import abcdef
		except Exception as e:
			print(e)
			subprocess.run(["pip3", "install", "abcdef"])
			break

if __name__ == '__main__':
	main()	
