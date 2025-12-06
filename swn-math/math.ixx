module;

#include <cmath>

export module swn.math;

export namespace swn {
	/// @brief 数学関数を提供するクラス
	class Mathf {
	public:
		/// @brief 絶対値を返す
		/// @param value 絶対値を求めたい値
		/// @return 絶対値
		static constexpr float Abs(float value) noexcept { return (value < 0.0f) ? -value : value; }

		/// @brief 指定した範囲に値をクランプする
		/// @param value クランプしたい値
		/// @param min 最小値
		/// @param max 最大値
		/// @return クランプされた値
		static constexpr float clamp(float value, float min, float max) noexcept { return (value < min) ? min : (value > max) ? max : value; }

		/// @brief 0から1の範囲に値をクランプする
		/// @param value クランプしたい値
		/// @return クランプされた値
		static constexpr float clamp01(float value) noexcept { return (value < 0.0f) ? 0.0f : (value > 1.0f) ? 1.0f : value; }

		/// @brief 小数点以下を切り捨てた値を返す
		/// @param value 切り捨てたい値
		/// @return 切り捨てられた値
		static constexpr float floor(float value) noexcept { return static_cast<float>(static_cast<int>(value) - ((value < 0.0f && value != static_cast<int>(value)) ? 1 : 0)); }

		/// @brief 2つの値のうち大きい方を返す
		/// @param value1 評価する値1
		/// @param value2 評価する値2
		/// @return 大きい方の値
		static constexpr float max(float value1, float value2) noexcept { return (value1 > value2) ? value1 : value2; }

		/// @brief 2つの値のうち小さい方を返す
		/// @param value1 評価する値1
		/// @param value2 評価する値2
		/// @return 小さい方の値
		static constexpr float min(float value1, float value2) noexcept { return (value1 < value2) ? value1 : value2; }

		/// @brief 累乗を計算する（二乗算法による高速実装）
		/// @param base 基数
		/// @param exponent 指数（整数）
		/// @return base の exponent 乗
		static constexpr float pow(float base, int exponent) noexcept {
			if (exponent == 0) return 1.0f;
			bool negative = exponent < 0;
			if (negative) exponent = -exponent;
			float result = 1.0f;
			while (exponent > 0) {
				if (exponent & 1) result *= base;
				base *= base;
				exponent >>= 1;
			}
			return negative ? 1.0f / result : result;
		}

		/// @brief 指定した長さで値を繰り返す
		/// @param value 繰り返したい値
		/// @param length 繰り返す長さ
		/// @return 繰り返された値
		static constexpr float repeat(float value, float length) noexcept { return value - Mathf::floor(value / length) * length; }

		/// @brief 値の符号を返す
		/// @param value 符号を求めたい値
		/// @return 符号（正の値なら1、負の値なら-1、ゼロなら0）
		static constexpr float sign(float value) noexcept { return (value > 0.0f) ? 1.0f : (value < 0.0f) ? -1.0f : 0.0f; }
	};
}