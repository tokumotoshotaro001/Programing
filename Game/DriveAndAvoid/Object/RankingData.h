#pragma once
class RankingData
{
private:
	int score[6];
	int rank[6];
	char name[6][15];

public:
	RankingData();
	~RankingData();

	void Initialize();
	void Finalize();

public:
	//ランキングデータの設定
	void SetRankingData(int score, const char* name);
	//スコア取得処理
	int GetScore(int value) const;
	//ランク取得
	int GetRank(int value) const;
	//名前取得処理
	const char* GetName(int value) const;
private:
	//データ入れ替え処理
	void SortData();
};

