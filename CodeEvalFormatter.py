import os
import sys
def get_immediate_subdirectories(a_dir):
    return [name for name in os.listdir(a_dir)
            if os.path.isdir(os.path.join(a_dir, name))]
ParentDirectory = "/Users/anassaeed/Desktop/temp"

directories = get_immediate_subdirectories(ParentDirectory)
for directory in directories:
	filePath = ParentDirectory +"/"+directory+"/"+directory+"/main.cpp"
	try:
		lines = [line.rstrip('\n') for line in open(filePath)]
		fo = open(directory+".cpp", "w")
		for line in lines:
			fo.write(line+"\n")
		print directory+ "  written"
	except Exception, e:
		continue
		# raise e