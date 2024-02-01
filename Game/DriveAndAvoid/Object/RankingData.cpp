#include "RankingData.h"
#include <stdio.h>
#include <string.h>

RankingData::RankingData()
{
	for (int i = 0; i < 6; i++)
	{
		score[i] = NULL;
		rank[i] = NULL;
		for (int j = 0; j < 15; j++)
		{
			name[i][j] = '\0';
		}
	}
}

RankingData::~RankingData()
{

}

//����������
void RankingData::Initialize()
{
	//�����L���O�f�[�^�̓ǂݍ���
	FILE* fp = nullptr;

	//�t�@�C���I�[�v��
	errno_t result = fopen_s(&fp, "Resource/dat/ranking_data.csv", "r");

	//�G���[�`�F�b�N
	if (result != 0)
	{
		throw("Resource/dat/ranking_data.csv���J���܂���ł���\n");
	}

	//�Ώۃt�@�C������ǂݍ���
	for (int i = 0; i < 5; i++)
	{
		fscanf_s(fp, "%6d,%2d,%[^,],\n", &score[i], &rank[i], name[i], 15);
	}
}

//�I������
void RankingData::Finalize()
{

}

//�f�[�^�ݒ菈��
void RankingData::SetRankingData(int score, const char* name)
{
	this->score[5] = score;
	strcpy_s(this->name[5], name);

	SortData();
}

//�X�R�A�擾����
int RankingData::GetScore(int value) const
{
	return score[value];
}

//�����N�擾����
int RankingData::GetRank(int value) const
{
	return rank[value];
}

//���O�擾����
const char* RankingData::GetName(int value) const
{
	return name[value];
}
