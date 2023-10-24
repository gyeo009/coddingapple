Ctrl + Z 로도 취소할 수 있지만 다른 방식도 있슴
그게 바로 git restore [filename] / 해당 file을 최근 commit 상태로 전환함

commit 취소하는 법은 git revert
commit 자체는 취소가 불가능하지만, 한 commit에서 작업한 내용을 취소하는 새로운 commit 생성은 가능
최근 commit 내역 취소하는 commit 생성이 git revert HEAD

git reset --hard [commitID] : 해당 commit id 시점까지 모든 걸 되돌리기