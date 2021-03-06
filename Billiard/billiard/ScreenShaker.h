#pragma once
//画面揺れクラス
class ScreenShaker
{
private:
	int _screenH;//画面
	float _shakeScale;//揺れ幅
public:
	ScreenShaker();
	~ScreenShaker();
	//揺れトリガー
	void Shake();

	//画面揺れ準備()
	void PrepareShake();

	//画面揺れ更新
	void UpdateShake();
};

