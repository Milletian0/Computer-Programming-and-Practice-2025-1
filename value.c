/* 여러 소스 파일 */
/* 
	다른 소스 파일에서 정의된 함수를 쓰려면, 함수를 선언합니다. 
	프로젝트에 해당 소스 파일이 등록되어 있으면, 선언된 함수를 쓸 수 있습니다.
*/

int value(int);

int main() {
	return value(1); /* 1을 반환한다. */
}

/* value 함수 정의 */

int value(int x) {
	return x;
}
